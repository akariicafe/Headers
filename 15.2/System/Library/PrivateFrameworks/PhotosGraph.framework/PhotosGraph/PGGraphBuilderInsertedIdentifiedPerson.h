@class PGGraphPersonNode, NSDate;

@interface PGGraphBuilderInsertedIdentifiedPerson : NSObject

@property (readonly) PGGraphPersonNode *personNode;
@property (retain, nonatomic) NSDate *birthdayDate;
@property (retain, nonatomic) NSDate *anniversaryDate;
@property (nonatomic) unsigned long long relationship;

- (void).cxx_destruct;
- (id)initWithPersonNode:(id)a0;

@end
