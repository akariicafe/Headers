@interface TSPFilePackageConverter : TSPPackageConverter

- (BOOL)isValid;
- (id)newWriteChannelAtPath:(id)a0 lastModificationDate:(id)a1 size:(unsigned long long)a2 CRC:(unsigned int)a3 packageWriter:(id)a4 error:(id *)a5;

@end
