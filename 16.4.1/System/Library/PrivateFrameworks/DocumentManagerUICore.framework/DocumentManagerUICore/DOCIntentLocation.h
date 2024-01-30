@class NSString;

@interface DOCIntentLocation : INObject

@property (copy, nonatomic) NSString *domainIdentifier;
@property (copy, nonatomic) NSString *locationIdentifier;
@property (copy, nonatomic) NSString *locationType;

+ (id)imageForType:(id)a0;
+ (id)intentLocationWithIdentifier:(id)a0 displayString:(id)a1 type:(id)a2;
+ (id)intentLocationWithItem:(id)a0;
+ (id)intentLocationWithTag:(id)a0;

@end
