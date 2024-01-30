@class MPModelObject;

@interface MPLibraryKeepLocalStatusObserverConfiguration : NSObject

@property (nonatomic) long long enableState;
@property (retain, nonatomic) MPModelObject *identifyingModelObject;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;

@end
