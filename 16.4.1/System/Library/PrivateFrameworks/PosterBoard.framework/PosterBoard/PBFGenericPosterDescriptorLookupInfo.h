@class NSString, PRSServerPosterPath;
@protocol BSInvalidatable, PRPosterExtensionDescribing;

@interface PBFGenericPosterDescriptorLookupInfo : NSObject <PBFPosterDescriptorLookupInfo, NSCopying> {
    id<BSInvalidatable> _pathValidityExtension;
}

@property (readonly, nonatomic) PRSServerPosterPath *posterDescriptorPath;
@property (readonly, nonatomic) id<PRPosterExtensionDescribing> posterDescriptorExtension;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)posterDescriptorLookupInfoForPath:(id)a0 extension:(id)a1;
+ (id)nullPosterDescriptorLookupInfo;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)_initWithPath:(id)a0 extension:(id)a1;
- (void).cxx_destruct;

@end
