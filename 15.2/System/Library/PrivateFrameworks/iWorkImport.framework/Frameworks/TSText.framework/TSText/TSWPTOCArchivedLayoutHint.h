@class NSString, TSWPTOCLayoutHint;
@protocol TSDHint;

@interface TSWPTOCArchivedLayoutHint : TSPObject <TSDArchivedHint> {
    TSWPTOCLayoutHint *_hint;
}

@property (retain, nonatomic) id<TSDHint> hint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
