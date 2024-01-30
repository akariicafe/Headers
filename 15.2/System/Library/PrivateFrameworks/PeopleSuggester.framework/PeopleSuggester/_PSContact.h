@class CNContact;

@interface _PSContact : NSObject

@property (retain, nonatomic) CNContact *cnContact;
@property (nonatomic) BOOL isChild;

- (void).cxx_destruct;
- (id)initWithCNContact:(id)a0 isChild:(BOOL)a1;

@end
