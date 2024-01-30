@interface BWFormat : NSObject

@property (readonly) unsigned int mediaType;
@property (readonly) struct opaqueCMFormatDescription { } *formatDescription;

+ (id)formatByResolvingRequirements:(id)a0 printErrors:(BOOL)a1;
+ (id)formatByResolvingRequirements:(id)a0;

@end
