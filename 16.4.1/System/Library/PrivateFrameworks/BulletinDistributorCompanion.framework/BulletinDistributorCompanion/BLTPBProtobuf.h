@class PBCodable, IDSProtobuf;

@interface BLTPBProtobuf : IDSProtobuf

@property (retain, nonatomic) IDSProtobuf *idsProtobuf;
@property (retain, nonatomic) PBCodable *protobuf;
@property (readonly, nonatomic) long long sequenceNumberError;
@property (readonly, nonatomic) unsigned long long sessionState;

- (void).cxx_destruct;
- (id)initWithIDSProtobuf:(id)a0 sequenceNumberManager:(id)a1;
- (id)initWithProtobuf:(id)a0 type:(unsigned short)a1 isResponse:(BOOL)a2 sequenceNumberManager:(id)a3;

@end
