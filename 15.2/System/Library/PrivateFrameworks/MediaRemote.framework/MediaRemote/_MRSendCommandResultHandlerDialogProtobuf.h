@class NSString, NSMutableArray;

@interface _MRSendCommandResultHandlerDialogProtobuf : PBCodable <NSCopying> {
    NSMutableArray *_actions;
    NSString *_localizedMessage;
    NSString *_localizedTitle;
}

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
