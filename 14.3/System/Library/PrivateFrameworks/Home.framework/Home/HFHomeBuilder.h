@class NSString, HFWallpaperEditCollectionBuilder;

@interface HFHomeBuilder : HFItemBuilder <HFNamedItemBuilder>

@property (retain, nonatomic) HFWallpaperEditCollectionBuilder *wallpaperBuilder;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *userNotes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)homeKitRepresentationClass;

- (void).cxx_destruct;
- (id)commitItem;
- (id)performValidation;
- (id)initWithExistingObject:(id)a0 inHome:(id)a1;
- (void)setHome:(id)a0;
- (id)createHome;
- (id)updateName;
- (id)updateUserNotes;

@end
