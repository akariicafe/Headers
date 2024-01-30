@class NSArray, AVWeakReference, AVDispatchOnce, NSString;
@protocol AVLoggingIdentifier;

@interface AVAssetInternal : NSObject {
    AVWeakReference *weakReference;
    AVDispatchOnce *loadChapterInfoOnce;
    NSArray *chapterGroupInfo;
    NSString *anchorChapterType;
    NSArray *availableChapterLanguages;
    NSArray *availableCanonicalizedChapterLanguages;
    NSArray *availableChapterLocales;
    id<AVLoggingIdentifier> loggingIdentifier;
}

@end
