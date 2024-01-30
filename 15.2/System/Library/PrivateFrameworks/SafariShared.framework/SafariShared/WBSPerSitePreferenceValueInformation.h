@class NSString, NSNumber, NSDate;

@interface WBSPerSitePreferenceValueInformation : NSObject

@property (readonly, copy, nonatomic) NSString *domain;
@property (readonly, nonatomic) NSNumber *value;
@property (readonly, nonatomic) NSDate *creationDate;

- (void).cxx_destruct;
- (id)initWithDomain:(id)a0 value:(id)a1 creationDate:(id)a2;

@end
