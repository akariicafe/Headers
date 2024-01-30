@class NSString;

@interface CUTCheckpoint : NSObject <NSSecureCoding, NSCopying> {
    BOOL _frozen;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *uniqueIdentifier;
@property (nonatomic) BOOL assertsUseAfterFreeze;
@property (nonatomic) BOOL shouldLogTouches;

+ (id)_reportDateFormatter;
+ (id)_allowlistedClasses;

- (BOOL)isFrozen;
- (id)initWithName:(id)a0 uniqueIdentifier:(id)a1;
- (BOOL)_assertNotFrozen;
- (id)_reportName;
- (void)_appendReportToMutableString:(id)a0 indentation:(long long)a1 paddedNameLength:(long long)a2;
- (id)_reportStartDate;
- (id)_reportEndDate;
- (id)_reportMetadata;
- (id)_freezeBacktrace;
- (void)encodeWithCoder:(id)a0;
- (void)freeze;
- (id)description;
- (id)report;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_freeze;

@end
