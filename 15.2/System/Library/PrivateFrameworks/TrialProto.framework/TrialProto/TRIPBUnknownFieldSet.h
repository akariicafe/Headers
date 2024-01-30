@interface TRIPBUnknownFieldSet : NSObject <NSCopying> {
    struct __CFDictionary { } *fields_;
}

+ (BOOL)isFieldTag:(int)a0;

- (void)mergeFromCodedInputStream:(id)a0;
- (void)getTags:(int *)a0;
- (unsigned long long)serializedSizeAsMessageSet;
- (void)writeAsMessageSetTo:(id)a0;
- (void)mergeMessageSetMessage:(int)a0 data:(id)a1;
- (id)description;
- (BOOL)mergeFieldFrom:(int)a0 input:(id)a1;
- (id)getField:(int)a0;
- (void)addUnknownMapEntry:(int)a0 value:(id)a1;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)countOfFields;
- (void)mergeFromData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeVarintField:(int)a0 value:(int)a1;
- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)hasField:(int)a0;
- (void)addField:(id)a0;
- (id)mutableFieldForNumber:(int)a0 create:(BOOL)a1;
- (void)mergeUnknownFields:(id)a0;
- (unsigned long long)serializedSize;
- (id)data;
- (id)sortedFields;
- (void)writeToCodedOutputStream:(id)a0;

@end
