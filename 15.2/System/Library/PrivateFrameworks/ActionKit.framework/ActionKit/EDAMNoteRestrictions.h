@class NSNumber;

@interface EDAMNoteRestrictions : FATObject

@property (retain, nonatomic) NSNumber *noUpdateTitle;
@property (retain, nonatomic) NSNumber *noUpdateContent;
@property (retain, nonatomic) NSNumber *noEmail;
@property (retain, nonatomic) NSNumber *noShare;
@property (retain, nonatomic) NSNumber *noSharePublicly;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
