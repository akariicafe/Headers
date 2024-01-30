@class NSString, CRRegisterLatest;
@protocol CRCoding, CRDataType;

@interface CROrderedSetElement : NSObject <CRDataType, NSCopying, CREquatable>

@property (retain, nonatomic) id<CRDataType, CRCoding> value;
@property (retain, nonatomic) CRRegisterLatest *index;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)temporaryElementWithValue:(id)a0;

- (void)setDocument:(id)a0;
- (void)mergeWith:(id)a0;
- (void)walkGraph:(id /* block */)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)deltaSince:(id)a0 in:(id)a1;
- (BOOL)isEqual:(id)a0;
- (void)realizeLocalChangesIn:(id)a0;
- (id)tombstone;
- (void).cxx_destruct;
- (void)encodeIntoProtobufSetElement:(void *)a0 coder:(id)a1;
- (id)initWithProtobufSetElement:(const void *)a0 decoder:(id)a1;

@end
