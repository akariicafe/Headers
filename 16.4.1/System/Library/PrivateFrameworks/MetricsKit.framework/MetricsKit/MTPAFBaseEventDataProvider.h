@protocol MTPAFBaseEventDataProviderDelegate;

@interface MTPAFBaseEventDataProvider : MTBaseEventDataProvider

@property (weak, nonatomic) id<MTPAFBaseEventDataProviderDelegate> delegate;

- (id)knownFields;
- (id)isOffline:(id)a0;
- (id)osLanguages:(id)a0;

@end
