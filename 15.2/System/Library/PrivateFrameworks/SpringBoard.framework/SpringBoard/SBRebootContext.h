@class NSString;

@interface SBRebootContext : NSObject <NSCopying> {
    BOOL _fromOTASoftwareUpdate;
}

@property (readonly, copy, nonatomic) NSString *reason;
@property (nonatomic, getter=isDark) BOOL dark;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithReason:(id)a0;

@end
