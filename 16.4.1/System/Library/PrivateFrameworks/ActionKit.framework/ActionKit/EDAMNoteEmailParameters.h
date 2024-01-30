@class NSString, NSArray, EDAMNote;

@interface EDAMNoteEmailParameters : FATObject

@property (retain, nonatomic) NSString *guid;
@property (retain, nonatomic) EDAMNote *note;
@property (retain, nonatomic) NSArray *toAddresses;
@property (retain, nonatomic) NSArray *ccAddresses;
@property (retain, nonatomic) NSString *subject;
@property (retain, nonatomic) NSString *message;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
