@class NSString;

@interface STStgInfo : NSObject {
    NSString *m_pstrName;
    int m_type;
    unsigned int m_userFlags;
    unsigned int m_size;
    long long m_creationTime;
    long long m_modificationTime;
    int m_accessMode;
    struct { unsigned int m_data1; unsigned short m_data2; unsigned short m_data3; unsigned char m_data4[8]; } m_clsid;
}

- (id)getName;
- (void)setCreationTime:(long long)a0;
- (void)setModificationTime:(long long)a0;
- (void)setType:(int)a0;
- (void)setSize:(unsigned int)a0;
- (id)init;
- (int)getType;
- (void)setName:(id)a0;
- (void).cxx_destruct;
- (unsigned int)getSize;
- (long long)getCreationTime;
- (int)getAccessMode;
- (struct { unsigned int x0; unsigned short x1; unsigned short x2; unsigned char x3[8]; })getCLSID;
- (long long)getModificationTime;
- (unsigned int)getUserFlags;
- (id)initWithStgInfo:(const struct _StgInfo { unsigned short *x0; int x1; unsigned int x2; unsigned long long x3; long long x4; long long x5; int x6; struct _SSRW_GUID { unsigned int x0; unsigned short x1; unsigned short x2; unsigned char x3[8]; } x7; } *)a0;
- (void)setAccessMode:(int)a0;
- (void)setCLSID:(struct { unsigned int x0; unsigned short x1; unsigned short x2; unsigned char x3[8]; })a0;
- (void)setUserFlags:(unsigned int)a0;

@end
