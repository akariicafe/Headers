@class MPModelObject;

@interface MPLibraryKeepLocalStatusObserverConfiguration : NSObject

@property (nonatomic) long long enableState;
@property (retain, nonatomic) MPModelObject *identifyingModelObject;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
