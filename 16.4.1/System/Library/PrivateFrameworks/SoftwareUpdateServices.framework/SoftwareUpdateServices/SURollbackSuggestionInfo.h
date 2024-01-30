@class NSString, NSArray;

@interface SURollbackSuggestionInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *clientIdentifier;
@property (nonatomic) unsigned long long suggestionReason;
@property (retain, nonatomic) NSArray *responsibleProcessesInfo;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;

@end
