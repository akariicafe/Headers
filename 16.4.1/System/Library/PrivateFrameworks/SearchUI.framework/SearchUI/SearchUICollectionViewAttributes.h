@class TLKAppearance, SearchUICommandEnvironment;

@interface SearchUICollectionViewAttributes : NSObject

@property (nonatomic) BOOL shouldUseInsetRoundedSections;
@property (retain, nonatomic) TLKAppearance *appearance;
@property (retain) SearchUICommandEnvironment *commandEnvironment;

- (void).cxx_destruct;

@end
