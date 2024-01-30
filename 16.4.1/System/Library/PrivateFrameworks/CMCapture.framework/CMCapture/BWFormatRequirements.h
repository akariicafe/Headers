@interface BWFormatRequirements : NSObject

@property (readonly) unsigned int mediaType;

- (BOOL)isEmpty;
- (Class)formatClass;
- (id)init;

@end
