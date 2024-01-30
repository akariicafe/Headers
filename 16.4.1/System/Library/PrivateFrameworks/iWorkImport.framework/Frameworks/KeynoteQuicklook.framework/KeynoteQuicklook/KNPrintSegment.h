@class KNSlideNode;

@interface KNPrintSegment : NSObject

@property (readonly, nonatomic) KNSlideNode *slideNode;
@property (readonly, nonatomic) unsigned long long buildIndex;
@property (readonly, nonatomic) unsigned long long notesIndex;
@property (readonly, nonatomic) long long commentsPageIndex;
@property (readonly, nonatomic) unsigned long long span;

- (void).cxx_destruct;
- (id)initWithSlideNode:(id)a0 buildIndex:(unsigned long long)a1 notesIndex:(unsigned long long)a2 commentsPageIndex:(long long)a3 span:(unsigned long long)a4;
- (id)initWithSlideNode:(id)a0 buildIndex:(unsigned long long)a1 notesIndex:(unsigned long long)a2 span:(unsigned long long)a3;

@end
