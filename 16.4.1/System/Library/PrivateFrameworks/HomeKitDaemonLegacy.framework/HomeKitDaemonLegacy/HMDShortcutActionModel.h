@class NSData;

@interface HMDShortcutActionModel : HMDActionModel

@property (retain) NSData *data;

+ (id)properties;
+ (Class)backedObjectClass;

- (void)loadModelWithActionInformation:(id)a0;

@end
