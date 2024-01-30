@class NSString, WBSSavedAccountMatch, NSDate;

@interface SFCredentialDisplayData : NSObject

@property (readonly, nonatomic) WBSSavedAccountMatch *match;
@property (readonly, copy, nonatomic) NSString *detail;
@property (readonly, nonatomic) NSDate *creationDate;

+ (id)descriptionForPasswordWithUser:(id)a0 creationDate:(id)a1;

- (void).cxx_destruct;
- (id)initWithMatch:(id)a0 detail:(id)a1 creationDate:(id)a2;

@end
