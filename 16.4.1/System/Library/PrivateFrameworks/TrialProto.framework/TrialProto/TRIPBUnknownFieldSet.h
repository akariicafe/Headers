@interface TRIPBUnknownFieldSet : NSObject <NSCopying> {
    struct __CFDictionary { } *fields_;
}

+ (BOOL)isFieldTag:(int)a0;

- (void)addField:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)data;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)addUnknownMapEntry:(int)a0 value:(id)a1;
- (unsigned long long)countOfFields;
- (id)getField:(int)a0;
- (void)getTags:(int *)a0;
- (BOOL)hasField:(int)a0;
- (BOOL)mergeFieldFrom:(int)a0 input:(id)a1;
- (void)mergeFromCodedInputStream:(id)a0;
- (void)mergeFromData:(id)a0;
- (void)mergeMessageSetMessage:(int)a0 data:(id)a1;
- (void)mergeUnknownFields:(id)a0;
- (void)mergeVarintField:(int)a0 value:(int)a1;
- (id)mutableFieldForNumber:(int)a0 create:(BOOL)a1;
- (unsigned long long)serializedSize;
- (unsigned long long)serializedSizeAsMessageSet;
- (id)sortedFields;
- (void)writeAsMessageSetTo:(id)a0;
- (void)writeToCodedOutputStream:(id)a0;

@end
