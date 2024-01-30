@class NSString, CRDocument;

@interface CRRegister : NSObject <CRDataType, CRCoding>

@property (retain, nonatomic) id contents;
@property (weak, nonatomic) CRDocument *document;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)registerWithType:(unsigned long long)a0 contents:(id)a1;
+ (id)registerWithType:(unsigned long long)a0 contents:(id)a1 document:(id)a2;

- (void)realizeLocalChangesIn:(id)a0;
- (void)mergeWith:(id)a0;
- (id)initWithCRCoder:(id)a0;
- (void).cxx_destruct;
- (id)deltaSince:(id)a0 in:(id)a1;
- (void)encodeWithCRCoder:(id)a0;
- (id)initWithDocument:(id)a0;
- (void)walkGraph:(id /* block */)a0;
- (id)tombstone;
- (BOOL)isEqualContents:(id)a0;

@end
