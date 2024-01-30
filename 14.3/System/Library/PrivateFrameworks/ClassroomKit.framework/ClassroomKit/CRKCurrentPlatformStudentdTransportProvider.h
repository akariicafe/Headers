@class NSString;
@protocol CRKTransportProviding;

@interface CRKCurrentPlatformStudentdTransportProvider : NSObject <CRKTransportProviding> {
    id<CRKTransportProviding> mBaseProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
