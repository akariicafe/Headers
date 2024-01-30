@class NSString, NSArray, NSDictionary;

@interface FCFeedViewportDiff : NSObject

@property (readonly, copy, nonatomic) NSString *viewportIdentifier;
@property (readonly, copy, nonatomic) NSArray *insertedElements;
@property (readonly, copy, nonatomic) NSDictionary *insertedElementsIndices;
@property (readonly, copy, nonatomic) NSArray *deletedElements;
@property (readonly, copy, nonatomic) NSDictionary *deletedElementsIndices;
@property (readonly, copy, nonatomic) NSArray *modifiedElements;
@property (readonly, copy, nonatomic) NSDictionary *modifiedElementsIndices;
@property (readonly, copy, nonatomic) NSArray *groupDiffs;
@property (readonly, nonatomic) BOOL isEmpty;

- (id)init;
- (void).cxx_destruct;
- (id)initWithViewportIdentifier:(id)a0 insertedElements:(id)a1 insertedElementsIndices:(id)a2 deletedElements:(id)a3 deletedElementsIndices:(id)a4 modifiedElements:(id)a5 modifiedElementsIndices:(id)a6 groupDiffs:(id)a7;

@end
