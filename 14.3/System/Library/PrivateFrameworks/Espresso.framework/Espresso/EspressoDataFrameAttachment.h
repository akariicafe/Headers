@class NSString;

@interface EspressoDataFrameAttachment : NSObject

@property (retain) NSString *filePath;
@property void *rawPointer;
@property unsigned long long offset;
@property unsigned long long size;
@property BOOL disabled;

+ (id)fromDict:(id)a0 frameStorage:(id)a1;

- (void).cxx_destruct;
- (void)loadFromDict:(id)a0 frameStorage:(id)a1;

@end
