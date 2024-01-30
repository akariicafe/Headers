@interface BWFormatRequirements : NSObject

@property (readonly) unsigned int mediaType;

- (BOOL)isEmpty;
- (id)init;
- (Class)formatClass;

@end
