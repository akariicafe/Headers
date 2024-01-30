@class NSUUID, NSString;

@interface TSPDocumentRevision : NSObject <NSCopying>

@property (readonly, nonatomic) int sequence;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) NSString *revisionString;

+ (id)documentRevisionAtURL:(id)a0 passphrase:(id)a1 error:(id *)a2;
+ (id)revisionWithRevisionString:(id)a0;
+ (id)revisionWithSequence:(int)a0 identifier:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (long long)compareSequenceFromRevision:(id)a0;
- (id)initWithRevisionString:(id)a0;
- (id)initWithSequence:(int)a0 identifier:(id)a1;
- (id)nextRevisionWithIdentifier:(id)a0;

@end
