@class PHFace, PHPerson;

@interface PHPersonSuggestion : NSObject

@property (readonly, nonatomic) PHFace *keyFace;
@property (readonly, nonatomic) PHPerson *person;
@property (readonly, nonatomic) BOOL confirmed;

- (id)initWithKeyFace:(id)a0 person:(id)a1 confirmed:(BOOL)a2;
- (void).cxx_destruct;

@end
