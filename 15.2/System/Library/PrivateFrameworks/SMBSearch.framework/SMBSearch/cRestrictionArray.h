@class NSObject;
@protocol RestrictionProtocol;

@interface cRestrictionArray : NSObject

@property (readonly) BOOL isPresent;
@property (retain) NSObject<RestrictionProtocol> *restriction;

- (void).cxx_destruct;
- (id)init;
- (int)encodeBuffer:(id)a0 BufferOffset:(unsigned int)a1 BytesWritten:(unsigned int *)a2;
- (id)initWithRestriction:(id)a0;

@end
