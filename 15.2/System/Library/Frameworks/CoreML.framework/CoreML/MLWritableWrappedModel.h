@class NSString;

@interface MLWritableWrappedModel : MLWrappedModel <MLWritable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)wrapperAroundWritableModel:(id)a0;

- (BOOL)writeToURL:(id)a0 error:(id *)a1;

@end
