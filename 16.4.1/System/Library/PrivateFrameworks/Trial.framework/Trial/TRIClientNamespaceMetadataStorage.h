@class NSString;
@protocol TRIPaths;

@interface TRIClientNamespaceMetadataStorage : NSObject <TRIClientNamespaceMetadataStoring> {
    id<TRIPaths> _paths;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
