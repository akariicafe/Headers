@class MPModelObject;

@interface MPLibraryKeepLocalStatusObserverConfiguration : NSObject

@property (nonatomic) long long enableState;
@property (retain, nonatomic) MPModelObject *identifyingModelObject;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
