@class NSData, NSString;

@interface ADIDRecord : NSObject

@property (retain, nonatomic) NSData *encryptedID;
@property (retain, nonatomic) NSString *ID;
@property (nonatomic) BOOL dirty;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithID:(id)a0;

@end
