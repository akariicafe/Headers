@class NSNumber, NSMutableDictionary;

@interface __NSCFURLSessionTaskActiveStreamDependencyInfo : NSObject {
    NSNumber *_streamID;
    NSMutableDictionary *_mainDocumentTaskURLs;
    NSMutableDictionary *_mainDocumentTaskMimeTypes;
}

- (void)dealloc;
- (id)init;

@end
