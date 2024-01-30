@class NSString;
@protocol CRKMarker;

@interface CRKStudentKeepAliveFile : NSObject <CRKMarker>

@property (readonly, nonatomic) id<CRKMarker> fileMarker;
@property (readonly, nonatomic) BOOL exists;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fileURL;

@end
