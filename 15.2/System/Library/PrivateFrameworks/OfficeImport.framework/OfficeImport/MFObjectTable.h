@class NSMutableArray;

@interface MFObjectTable : NSObject {
    NSMutableArray *m_objects;
}

@property unsigned int maximumSize;

- (void)clear;
- (int)size;
- (void).cxx_destruct;
- (id)init;
- (int)deleteObject:(unsigned int)a0;
- (unsigned int)insertPos;
- (int)selectInto:(int)a0 io_DC:(id)a1;
- (int)putObject:(id)a0 in_objectPos:(unsigned int)a1;
- (id)getObject:(unsigned int)a0;

@end
