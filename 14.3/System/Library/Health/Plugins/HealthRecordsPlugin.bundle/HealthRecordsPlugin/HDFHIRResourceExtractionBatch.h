@class NSNumber, HDFHIRResourceDocument;

@interface HDFHIRResourceExtractionBatch : NSObject

@property (readonly, nonatomic) HDFHIRResourceDocument *document;
@property (readonly, copy, nonatomic) NSNumber *rulesVersion;
@property (readonly, copy, nonatomic) NSNumber *highestRowID;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDocument:(id)a0 rulesVersion:(id)a1 highestRowID:(id)a2;
- (id)initWithDocument:(id)a0 rulesVersion:(id)a1;

@end
