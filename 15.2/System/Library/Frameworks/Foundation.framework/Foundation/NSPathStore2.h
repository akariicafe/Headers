@interface NSPathStore2 : NSString {
    unsigned int _lengthAndRefCount;
    unsigned short _characters[0];
}

+ (id)pathStoreWithCharacters:(const unsigned short *)a0 length:(unsigned long long)a1;
+ (id)pathWithComponents:(id)a0;

- (BOOL)isEqualToString:(id)a0;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (const unsigned short *)_fastCharacterContents;
- (id)stringByAbbreviatingWithTildeInPath;
- (unsigned long long)length;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (id)pathComponents;
- (id)lastPathComponent;
- (id)_stringByStandardizingPathUsingCache:(BOOL)a0;
- (id)stringByAppendingPathComponent:(id)a0;
- (id)stringByStandardizingPath;
- (BOOL)isAbsolutePath;
- (id)stringByAppendingPathExtension:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)stringByExpandingTildeInPath;
- (id)stringByDeletingPathExtension;
- (id)copy;
- (id)pathExtension;
- (unsigned long long)hash;
- (id)stringByDeletingLastPathComponent;
- (id)_stringByResolvingSymlinksInPathUsingCache:(BOOL)a0;
- (id)stringByResolvingSymlinksInPath;

@end
