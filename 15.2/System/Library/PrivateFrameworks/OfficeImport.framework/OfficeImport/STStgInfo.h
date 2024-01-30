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

- (void)setName:(id)a0;
- (int)getType;
- (void)setCreationTime:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (id)getName;
- (void)setSize:(unsigned int)a0;
- (void)setType:(int)a0;
- (unsigned int)getSize;
- (void)setModificationTime:(long long)a0;
- (void)setCLSID:(struct { unsigned int x0; unsigned short x1; unsigned short x2; unsigned char x3[8]; })a0;
- (id)initWithStgInfo:(const struct _StgInfo { unsigned short *x0; int x1; unsigned int x2; unsigned long long x3; long long x4; long long x5; int x6; struct _SSRW_GUID { unsigned int x0; unsigned short x1; unsigned short x2; unsigned char x3[8]; } x7; } *)a0;
- (unsigned int)getUserFlags;
- (void)setUserFlags:(unsigned int)a0;
- (long long)getCreationTime;
- (long long)getModificationTime;
- (int)getAccessMode;
- (void)setAccessMode:(int)a0;
- (struct { unsigned int x0; unsigned short x1; unsigned short x2; unsigned char x3[8]; })getCLSID;

@end
