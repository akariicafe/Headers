@class PXNewMagazineRectArray;

@interface PXNewMagazineChunk : NSObject

@property (readonly, nonatomic) long long startIndexOfInputs;
@property (readonly, nonatomic) long long startY;
@property (readonly, nonatomic) unsigned long long numOfRects;
@property (readonly, nonatomic) PXNewMagazineRectArray *rectsArray;
@property (readonly, nonatomic) unsigned long long height;

- (void).cxx_destruct;
- (id)initWithStartY:(long long)a0 startIndexOfInputs:(long long)a1 rectsArray:(id)a2;

@end
