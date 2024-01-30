@class MPModelLibraryKeepLocalChangeRequest, NSArray, MusicKit_SoftLinking_MPModelObject;

@interface MusicKit_SoftLinking_MPModelLibraryKeepLocalChangeRequest : NSObject {
    MPModelLibraryKeepLocalChangeRequest *_underlyingLibraryKeepLocalChangeRequest;
}

@property (readonly, nonatomic) MPModelLibraryKeepLocalChangeRequest *_underlyingLibraryKeepLocalChangeRequest;
@property (retain, nonatomic) MusicKit_SoftLinking_MPModelObject *modelObject;
@property (nonatomic) long long enableState;
@property (copy, nonatomic) NSArray *relatedModelObjects;

- (id)init;
- (void).cxx_destruct;

@end
