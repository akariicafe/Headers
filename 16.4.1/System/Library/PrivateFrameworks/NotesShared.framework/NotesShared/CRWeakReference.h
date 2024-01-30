@class NSUUID, NSString, ICCRDocument;

@interface CRWeakReference : NSObject <CRDataType, CRCoding>

@property (weak, nonatomic) ICCRDocument *document;
@property (retain, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) id contents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContents:(id)a0 document:(id)a1;
- (id)initWithContents:(id)a0;
- (void)mergeWith:(id)a0;
- (void)walkGraph:(id /* block */)a0;
- (id)initWithIdentifier:(id)a0 document:(id)a1;
- (id)deltaSince:(id)a0 in:(id)a1;
- (void)encodeWithCRCoder:(id)a0;
- (id)initWithCRCoder:(id)a0;
- (void)realizeLocalChangesIn:(id)a0;
- (id)tombstone;
- (void).cxx_destruct;

@end
