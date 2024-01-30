@class NSString;
@protocol CRKMarker;

@interface CRKSettingsUIVisibilityIndicatorFile : NSObject <CRKMarker> {
    id<CRKMarker> mFileMarker;
}

@property (readonly, nonatomic) BOOL exists;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fileURL;

@end
