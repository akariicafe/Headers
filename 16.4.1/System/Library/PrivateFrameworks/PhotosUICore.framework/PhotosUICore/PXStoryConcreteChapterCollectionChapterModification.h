@class NSObject;
@protocol NSCopying;

@interface PXStoryConcreteChapterCollectionChapterModification : NSObject <PXStoryChapterCollectionChapterModification>

@property (readonly, nonatomic) NSObject<NSCopying> *editedChapterIdentifier;
@property (readonly, nonatomic) id /* block */ chapterChangeRequest;
@property (readonly, nonatomic) long long kind;

- (id)init;
- (void).cxx_destruct;
- (id)initWithEditedChapterIdentifier:(id)a0 chapterChangeRequest:(id /* block */)a1;

@end
