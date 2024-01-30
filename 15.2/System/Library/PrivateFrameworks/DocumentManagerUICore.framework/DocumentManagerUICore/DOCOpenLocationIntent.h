@class INFile, DOCIntentLocation;

@interface DOCOpenLocationIntent : INIntent

@property (copy, nonatomic) DOCIntentLocation *location;
@property (copy, nonatomic) INFile *folder;

+ (id)intentFromActivity:(id)a0;
+ (id)intentFromGenericIntent:(id)a0;

@end
