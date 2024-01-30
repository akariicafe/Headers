@class NSString, NSArray;

@interface FCFeedGroupDiff : NSObject

@property (readonly, copy, nonatomic) NSString *groupIdentifier;
@property (readonly, copy, nonatomic) NSArray *insertedElements;
@property (readonly, copy, nonatomic) NSArray *deletedElements;
@property (readonly, copy, nonatomic) NSArray *modifiedElements;
@property (readonly, copy, nonatomic) NSArray *insertedHeadlines;
@property (readonly, copy, nonatomic) NSArray *deletedHeadlines;
@property (readonly, copy, nonatomic) NSArray *modifiedHeadlines;
@property (readonly, nonatomic) BOOL isEmpty;

- (id)init;
- (void).cxx_destruct;
- (id)initWithGroupIdentifier:(id)a0 insertedElements:(id)a1 deletedElements:(id)a2 modifiedElements:(id)a3;

@end
