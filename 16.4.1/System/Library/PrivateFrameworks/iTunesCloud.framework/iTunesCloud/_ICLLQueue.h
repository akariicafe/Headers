@class NSString, NSMutableArray;

@interface _ICLLQueue : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _storefronts;
    NSString *_currentRadioStationId;
    int _demarkationPos;
    int _explicitSetting;
    NSMutableArray *_items;
    NSString *_queueId;
    int _revision;
    struct { unsigned char demarkationPos : 1; unsigned char explicitSetting : 1; unsigned char revision : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
